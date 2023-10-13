/*
 * @file TArtDecoderV2740NOTDivided.hh
 * S.Ogio 20230426
 */
#ifndef TARTDECODERV2740NOTDIVIDED_H
#define TARTDECODERV2740NOTDIVIDED_H
#include "TArtDecoder.hh"

//#define TARTDECODEV2740_DEBUG 1

class TArtDecoderV2740NOTDivided  : public TArtDecoder {
private:
  TArtDecoderV2740NOTDivided();
  TArtDecoderV2740NOTDivided(const TArtDecoderV2740NOTDivided &rhs);
public:
  static const int kID = 51;
  static const int NCH = 64;
  int counter, evtCnt;
  
  static TArtDecoder* Instance();
  ~TArtDecoderV2740NOTDivided();
  int Decode(unsigned char* &buf, const unsigned int& size,
	     TArtRawSegmentObject *rawseg);
private:
  uint64_t Permute2ManualFormat(const uint64_t);
};
#endif // end of #ifdef TARTDECODERV2740NOTDIVIDED_H
