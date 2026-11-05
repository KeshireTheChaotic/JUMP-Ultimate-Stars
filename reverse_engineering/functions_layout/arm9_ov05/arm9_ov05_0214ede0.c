
void FUN_0214ede0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x021bad2c(*puVar2);
  if (iVar1 != 0) {
    func_0x021bac28(*puVar2,99,0,0,0,0,0,0);
    FUN_02028384(*(undefined4 *)(puVar2[0xc] + 4),FUN_0214ee40);
  }
  return;
}

