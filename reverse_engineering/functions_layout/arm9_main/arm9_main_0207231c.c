
void FUN_0207231c(int param_1)

{
  switch(param_1) {
  case 0:
    *(uint *)(iRam020723a4 + 100) = uRam020723a8 & *(uint *)(iRam020723a4 + 100);
    FUN_02073114(uRam020723ac,4);
    break;
  case 1:
    *(uint *)(iRam020723a4 + 100) = uRam020723b0 & *(uint *)(iRam020723a4 + 100);
    FUN_02073114(uRam020723ac,4);
    break;
  case 2:
    *(uint *)(iRam020723a4 + 100) = uRam020723b4 & *(uint *)(iRam020723a4 + 100);
    FUN_02073114(uRam020723ac,4);
    break;
  case 3:
    *(uint *)(iRam020723a4 + 100) = uRam020723b8 & *(uint *)(iRam020723a4 + 100);
    FUN_02073114(uRam020723ac,4);
  }
  *(undefined1 *)(param_1 * 0xca4U + 0x20b4dac) = 0;
  DAT_020b02ac = 1;
  FUN_02073114(param_1 * 0xca4U + 0x4af4);
  return;
}

