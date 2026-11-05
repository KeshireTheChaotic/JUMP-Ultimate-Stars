
void FUN_02165380(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(int *)(iVar2 + 0xc) != 0) && (*(int *)(*(int *)(*(int *)(iVar2 + 0xc) + 4) + 0x224) == 0))
  {
    return;
  }
  iVar1 = func_0x021a315c();
  if (iVar1 == 0) {
    *(undefined4 *)(iVar2 + 8) = 1;
    func_0x02199fd8();
  }
  FUN_02165298(iVar2);
  return;
}

