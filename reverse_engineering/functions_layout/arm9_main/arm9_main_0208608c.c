
void FUN_0208608c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar1 = FUN_020856e8();
  if (iVar1 == 0) {
    (*(code *)(&PTR_FUN_020a00a8)[*(byte *)(iVar2 + 0x34)])(param_1);
    return;
  }
  return;
}

