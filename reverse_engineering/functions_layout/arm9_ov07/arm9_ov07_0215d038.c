
void FUN_0215d038(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar2 + 0x50);
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 4) {
    if (iVar1 != 0) {
      (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
    }
    func_0x021bd730(*(undefined4 *)(iVar2 + 0x54),0x69,0);
    return;
  }
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  }
  func_0x021bd730(*(undefined4 *)(iVar2 + 0x54),0x6a,0);
  return;
}

