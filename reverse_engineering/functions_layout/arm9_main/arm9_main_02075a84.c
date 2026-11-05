
/* JUS-GAME AutoSaveLoad::AutoSave_Add [source-string] __FILE__="AutoSaveLoad.cpp"
   __FUNCTION__="AutoSave_Add" lines=[46] passed to 1 source-location call(s) */

int AutoSaveLoad::AutoSave_Add(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_10;
  
                    /* JUS-TAG strings=["AutoSaveLoad.cpp","AutoSave_Add"] */
  FUN_0206dcdc(0);
  piVar1 = (int *)thunk_FUN_0201a228(0x1c,s_AutoSaveLoad_cpp_0209f4fc,s_AutoSave_Add_0209f4ec,0x2e);
  FUN_020517fc(piVar1,0,0x1c);
  if (param_1 == 1) {
    *(undefined1 *)(piVar1 + 6) = 1;
  }
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  local_10 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_10);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_02075bc0);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  iVar2 = func_0x021ba49c(1,1,1);
  piVar1[3] = iVar2;
  func_0x021bac28(piVar1[3],0x10,0,0,0,0,0,0);
  func_0x021bad88(piVar1[3],1);
  iVar2 = Secret::Secret_Create();
  piVar1[4] = iVar2;
  FUN_02073ebc(2,1);
  return *piVar1;
}

