
void FUN_0207fb60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  (**(code **)(iVar2 + 0xfc))(iVar2);
  (**(code **)(iVar2 + 0x100))(iVar2);
  (**(code **)(iVar2 + 0x104))(iVar2);
  iVar1 = *(int *)(iVar2 + 0x10);
  while (iVar1 != 0) {
    FUN_0207ccd4(iVar2);
    iVar1 = *(int *)(iVar2 + 0x10);
  }
  return;
}

