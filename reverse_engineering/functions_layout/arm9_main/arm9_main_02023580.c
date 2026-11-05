
void FUN_02023580(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x50);
  iVar1 = (**(code **)(*piVar3 + 100))();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0201a228(0x3c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02096408::jus_Class_02096408(iVar1,piVar3,0);
  }
  (**(code **)(*piVar3 + 0xc))();
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  return;
}

