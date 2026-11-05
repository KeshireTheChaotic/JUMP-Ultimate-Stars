
void FUN_021ad110(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1[0x57] + 8);
  for (uVar3 = 0; uVar3 < *(uint *)(iVar1 + 0x24); uVar3 = uVar3 + 1) {
    FUN_021ad0ec(*(int *)(iVar1 + 0x20) + uVar3 * 0x24);
  }
  FUN_021ac1dc(iVar1 + 0x20,*(undefined4 *)(iVar1 + 0x24));
  piVar2 = (int *)param_1[0x58];
  (**(code **)(*(int *)piVar2[0x19] + 0x70))();
  (**(code **)(*piVar2 + 0xc4))();
  if ((char)param_1[0x59] != '\0') {
    FUN_021b5900(param_1,0,0);
    (**(code **)(*param_1 + 0x198))(param_1,0xffffffff);
  }
  (**(code **)(*param_1 + 400))();
  (**(code **)(*param_1 + 0x178))();
  return;
}

