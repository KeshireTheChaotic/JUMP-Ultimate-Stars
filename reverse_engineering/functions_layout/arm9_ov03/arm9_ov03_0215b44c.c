
/* JUS-GAME JArenaGetJPower::JAGetJPower_Add [source-string] __FILE__="JArenaGetJPower.cpp"
   __FUNCTION__="JAGetJPower_Add" lines=[97] passed to 1 source-location call(s) */

int JArenaGetJPower::JAGetJPower_Add
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  puVar1 = (undefined1 *)
           thunk_FUN_0201a228(0xc,s_JArenaGetJPower_cpp_0215eb24,s_JAGetJPower_Add_0215eb14,0x61);
  FUN_020517fc(puVar1,0,0xc);
  iVar2 = FUN_02020d90();
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  piVar3 = *(int **)(iVar2 + 4);
  if (param_1 == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(param_1 + 4));
  }
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0215b550);
  local_18 = 0x85000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
  *(int *)(puVar1 + 4) = iVar2;
  puVar1[2] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x1e);
  *puVar1 = 0x10;
  FUN_02041f7c(DAT_020a0f64,0);
  FUN_02043264(0);
  FUN_0203d4e4();
  FUN_02073ebc(2,1);
  return iVar2;
}

