
undefined4 FUN_0206a5d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [20];
  
  MIi_CpuClear16(0,param_1,0x400);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined1 *)(iVar2 + 0xe7) = 0xff;
    iVar2 = iVar2 + 0x100;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  FUN_0206ab24(auStack_28);
  uVar1 = FUN_02069cf4(auStack_28);
  iVar2 = 0;
  do {
    FUN_02051890(uVar1,param_1 + 0xf0,0xe);
    param_1 = param_1 + 0x100;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

