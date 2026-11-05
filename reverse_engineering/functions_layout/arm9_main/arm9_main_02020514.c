
int FUN_02020514(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x28);
  iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
  iVar2 = (**(code **)(*piVar3 + 0x28))();
  iVar1 = iVar1 + iVar2;
  return iVar1 + (uint)*(ushort *)
                        (iVar1 + (uint)*(byte *)(iVar1 + 7) * 4 + (uint)*(byte *)(iVar1 + 6) * 4 +
                         param_2 * 2 + 0xc);
}

