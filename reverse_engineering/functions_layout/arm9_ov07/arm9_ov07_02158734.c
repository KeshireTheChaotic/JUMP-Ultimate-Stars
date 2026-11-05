
void FUN_02158734(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar3 + 0x7c);
  pcVar2 = *(code **)(iVar1 + 0x20);
  if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(*(undefined4 *)(iVar1 + 0x14)), iVar1 == 0)) {
    func_0x021b65bc();
    FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 8) + 4),FUN_0215878c);
  }
  return;
}

