
void FUN_021617f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if ((*(byte *)(iVar3 + 0xb2) & 1) == 0) {
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 4),0);
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 4));
    piVar2 = *(int **)(*(int *)(iVar3 + 0x4c) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x50) + 4),1);
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar3 + 0x50) + 4));
    piVar2 = *(int **)(*(int *)(iVar3 + 0x54) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x74) + 4),1);
    func_0x021c3564(*(undefined4 *)(iVar3 + 0x30));
    func_0x021c3538(*(undefined4 *)(iVar3 + 0x30));
    FUN_02043264(0);
  }
  else {
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 4),1);
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 4));
    piVar2 = *(int **)(*(int *)(iVar3 + 0x4c) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x50) + 4),0);
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x50) + 4));
    piVar2 = *(int **)(*(int *)(iVar3 + 0x54) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    iVar1 = *(int *)(iVar3 + 0x30);
    *(byte *)(iVar1 + 0xa9) = *(byte *)(iVar1 + 0xa9) & 0xf7;
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar1 + 4) + 4));
    func_0x021c35fc(*(undefined4 *)(iVar3 + 0x30));
    FUN_02043264(1);
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02161968);
  func_0x021c368c(*(undefined4 *)(iVar3 + 0x30));
  FUN_02073ebc(2,1);
  return;
}

