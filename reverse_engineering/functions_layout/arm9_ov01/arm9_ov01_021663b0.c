
void FUN_021663b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(ushort *)(iVar3 + 0x96) < 0xb4) {
    *(ushort *)(iVar3 + 0x96) = *(ushort *)(iVar3 + 0x96) + 1;
    return;
  }
  iVar1 = FUN_02087724();
  if (iVar1 != 2) {
    piVar2 = *(int **)(*(int *)(iVar3 + 0x30) + 4);
    (**(code **)(*piVar2 + 0x14c))(piVar2,8);
  }
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

