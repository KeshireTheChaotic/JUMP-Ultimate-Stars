
void FUN_0205474c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  if (param_2 < 0) {
    param_2 = **(int **)(&DAT_020aadd4 + param_1 * 4);
  }
  iVar3 = param_2 * 0xc + (*(int **)(&DAT_020aadd4 + param_1 * 4))[4];
  uVar2 = FUN_02054888(*(undefined4 *)(iVar3 + 8),param_3 + -0x20);
  *(undefined4 *)(iVar3 + 8) = uVar2;
  uVar2 = FUN_020547c0(*(undefined4 *)(iVar3 + 4),param_3 + -0x20);
  *(undefined4 *)(iVar3 + 4) = uVar2;
  OS_RestoreInterrupts(uVar1);
  return;
}

