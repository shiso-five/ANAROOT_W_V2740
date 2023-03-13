/*
 * @file TArtDecoderV2740.hh
 * S.Ogio 20230209
 */
#ifndef TARTDECODERV2740_H
#define TARTDECODERV2740_H
#include "TArtDecoder.hh"

//#define TARTDECODEV2740_DEBUG 1

class TArtDecoderV2740  : public TArtDecoder {
private:
  TArtDecoderV2740();
  TArtDecoderV2740(const TArtDecoderV2740 &rhs);
public:
  static const int kID = 51;
  static const int NCH = 64;
  static TArtDecoder* Instance();
  ~TArtDecoderV2740();
  int Decode(unsigned char* &buf, const unsigned int& size,
	     TArtRawSegmentObject *rawseg);
private:
  uint64_t Permute2ManualFormat(const uint64_t);
};
#endif // end of #ifdef TARTDECODERV2740_H
