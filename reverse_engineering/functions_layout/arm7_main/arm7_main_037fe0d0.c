
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fe0d0(int *param_1,int param_2,undefined2 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
                    /* JUS-TAG hw={"IO_other":1} io=["04000006"] */
  uVar1 = OS_DisableInterrupts();
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    FUN_037fe538();
  }
  uVar3 = (uint)_DAT_04000006;
  iVar2 = FUN_037fdd54(uVar3);
  param_1[7] = 1;
  *(short *)(param_1 + 4) = (short)param_2;
  if (param_2 <= (int)uVar3) {
    iVar2 = iVar2 + 1;
  }
  param_1[3] = iVar2;
  *(undefined2 *)((int)param_1 + 0x12) = param_3;
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[9] = 0;
  FUN_037fe290(param_1);
  OS_RestoreInterrupts(uVar1);
  return;
}

