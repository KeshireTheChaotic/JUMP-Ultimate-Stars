
undefined4 FUN_02179a58(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  
  if (param_2 == 0xd) {
    iVar1 = FUN_02178448();
    local_10 = *(undefined4 *)(iVar1 + 0x204);
  }
  FUN_0217c024(param_2,param_1,0,0,&local_10,param_2 == 0xd);
  iVar1 = FUN_0217af70();
  if (iVar1 == 0) {
    iVar1 = FUN_02178448();
    uVar2 = FUN_02054b44();
    *(undefined8 *)(iVar1 + 0x1e0) = uVar2;
    return 1;
  }
  return 0;
}

