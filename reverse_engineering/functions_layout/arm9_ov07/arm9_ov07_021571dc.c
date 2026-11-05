
void FUN_021571dc(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar3 + 0x70);
  pcVar2 = *(code **)(iVar1 + 0x24);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined4 *)(iVar1 + 0x10));
  }
  FUN_02157480(iVar3);
  return;
}

