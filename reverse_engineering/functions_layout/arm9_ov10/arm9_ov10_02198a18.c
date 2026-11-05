
void FUN_02198a18(int param_1,char *param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  FUN_02198c0c(param_3);
  *(int *)(DAT_021aa094 + 0x2288) = DAT_021aa094 + 0x1500;
  *(undefined2 *)(DAT_021aa094 + 0x228c) = 0x400;
  uVar2 = FUN_021989ac(0);
  *(short *)(DAT_021aa094 + 0x228e) = (short)((1 << (uVar2 & 0xff)) >> 1);
  sVar1 = *(short *)(DAT_021aa094 + 0x2268);
  if (sVar1 == 0) {
    sVar1 = FUN_020586ac();
  }
  *(short *)(DAT_021aa094 + 0x2290) = sVar1;
  *(ushort *)(DAT_021aa094 + 0x2298) =
       (ushort)((*(uint *)(DAT_021aa094 + 0x2264) & 0x300000) != 0x300000);
  if (param_1 == 0) {
    FUN_02051890(&DAT_021a3630,DAT_021aa094 + 0x2292,6);
  }
  else {
    FUN_02051890(param_1,DAT_021aa094 + 0x2292,6);
  }
  if ((param_2 == (char *)0x0) || (param_2 == &DAT_021a3638)) {
    FUN_02051890(&DAT_021a3638,DAT_021aa094 + 0x229c,0x20);
    *(undefined2 *)(DAT_021aa094 + 0x229a) = 0;
  }
  else {
    FUN_02051890(param_2,DAT_021aa094 + 0x229c,0x20);
    iVar3 = 0;
    do {
      if (*param_2 == '\0') break;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    *(short *)(DAT_021aa094 + 0x229a) = (short)iVar3;
  }
  *(undefined4 *)(DAT_021aa094 + 0x2284) = 0;
  return;
}

