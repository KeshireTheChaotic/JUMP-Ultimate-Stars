
/* JUS-GAME JQuizCommonWork::JQuizCommonWork_Create [source-string] __FILE__="JQuizCommonWork.cpp"
   __FUNCTION__="JQuizCommonWork_Create" lines=[47] passed to 1 source-location call(s) */

void JQuizCommonWork::JQuizCommonWork_Create(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_02161de8 != (undefined4 *)0x0) {
    return;
  }
  DAT_02161de8 = (undefined4 *)
                 thunk_FUN_0201a228(0x1850,s_JQuizCommonWork_cpp_02160a98,&DAT_02160a5c,0x2f);
  FUN_020517fc(DAT_02161de8,0,0x1850);
  *DAT_02161de8 = param_1;
  uVar1 = FUN_020101f4(s_jquiz_jquiz_pack_aar_02160aac,0);
  DAT_02161de8[0x12] = uVar1;
  uVar1 = FUN_020101f4(s_JArena_JArena_aar_02160ac4,0);
  DAT_02161de8[0x13] = uVar1;
  uVar1 = TitleData::TitleData_Create();
  DAT_02161de8[0xe] = uVar1;
  piVar2 = (int *)FUN_02033410(s_jquiz_jquiz_bin_02160ad8,0,0);
  if (piVar2[7] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  DAT_02161de8[0xf] = piVar2[7];
  puVar3 = (undefined4 *)
           (**(code **)(**(int **)(DAT_02161de8[0xf] + 4) + 0x2c))
                     (*(int **)(DAT_02161de8[0xf] + 4),0);
  DAT_02161de8[0x11] = *puVar3;
  DAT_02161de8[0x10] = puVar3 + 1;
  *(undefined1 *)((int)DAT_02161de8 + 0xd) = 0xff;
  *(undefined1 *)((int)DAT_02161de8 + 0xe) = 0;
  *(undefined1 *)((int)DAT_02161de8 + 0xf) = 0;
  iVar4 = FUN_02070d54();
  if (iVar4 != 0) {
    *(undefined1 *)((int)DAT_02161de8 + 0xe) = 1;
  }
  return;
}

