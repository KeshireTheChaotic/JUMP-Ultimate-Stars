
void FUN_02160194(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02160064();
  if (iVar2 == 0) {
    if (((uint)param_1 & 0x1f) != 0) {
      FUN_02055684();
    }
    DAT_0216ad8c = param_1;
    MIi_CpuClear32(0,param_1,0x5a88);
    *DAT_0216ad8c = param_3;
    DAT_0216ad8c[1] = param_2;
    FUN_0215fef0(DAT_0216ad8c + 2);
    FUN_0215eaac(DAT_0216ad8c + 0x15d8);
    *(undefined2 *)(DAT_0216ad8c + 0x3c) = 1;
    *(undefined2 *)(DAT_0216ad8c + 0x45) = 0x200;
    *(undefined2 *)((int)DAT_0216ad8c + 0x116) = 0x200;
    *(undefined2 *)((int)DAT_0216ad8c + 0xf6) = 1;
    FUN_0215eb08(DAT_0216ad8c + 0x48,DAT_0216ad8c + 0x38,&LAB_021602bc,*DAT_0216ad8c);
    uVar3 = OS_DisableInterrupts();
    DAT_0216ad88 = 2;
    if ((code *)DAT_0216ad8c[1] != (code *)0x0) {
      (*(code *)DAT_0216ad8c[1])(2,0);
    }
    OS_RestoreInterrupts(uVar3);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

