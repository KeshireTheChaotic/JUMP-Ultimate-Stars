
void FUN_021634fc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(iVar1 + 0x1c); iVar2 = iVar2 + 1) {
    (*(code *)(&PTR_FUN_02171590)
              [*(byte *)(*(int *)(iVar2 * 0x14 + *(int *)(iVar1 + 0x14) + 4) + 0xc)])();
  }
  return;
}

