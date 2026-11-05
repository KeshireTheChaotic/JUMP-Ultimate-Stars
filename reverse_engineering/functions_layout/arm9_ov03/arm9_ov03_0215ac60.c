
void FUN_0215ac60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  FUN_020736e4(0x3a,0);
  uVar3 = FUN_02054b44();
  *(undefined8 *)(iVar2 + 0xf8) = uVar3;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215ae24);
  return;
}

