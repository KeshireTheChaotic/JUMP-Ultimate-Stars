
void FUN_0216035c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0x70000007) {
    FUN_0215f6fc(uVar2);
    return;
  }
  return;
}

