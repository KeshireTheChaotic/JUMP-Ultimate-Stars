
/* JUS-SDK MIi_CardDmaCopy32 [behavioral] control 0xAF000001: card timing, source fixed, 32-bit,
   repeat, 1 word per request */

void MIi_CardDmaCopy32(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  MIi_CheckAnotherAutoDMA(param_1,0xffffffff);
  MIi_CheckDma9(param_1,param_2,param_4,0x1000000);
  if (param_4 == 0) {
    return;
  }
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  MIi_DmaSetParams(param_1,param_2,param_3,0xaf000001);
  return;
}

