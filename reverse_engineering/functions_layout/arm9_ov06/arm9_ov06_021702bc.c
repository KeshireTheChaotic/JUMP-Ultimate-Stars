
/* JUS-GAME BattlePrmData::Battle_PrmDataInit [source-string] __FILE__="BattlePrmData.cpp"
   __FUNCTION__="Battle_PrmDataInit" lines=[32] passed to 1 source-location call(s) */

int * BattlePrmData::Battle_PrmDataInit
                (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_r5;
  undefined1 auStack_38 [32];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(0x20,s_BattlePrmData_cpp_021728f8,s_Battle_PrmDataInit_021728e4
                                     ,0x20);
  FUN_020517fc(piVar1,0,0x20);
  *(undefined2 *)(piVar1 + 6) = 0xffff;
  *(undefined2 *)((int)piVar1 + 0x1a) = 0x7a;
  *(undefined2 *)(piVar1 + 7) = 0xffff;
  *(undefined2 *)((int)piVar1 + 0x1e) = 0xffff;
  if (param_1 == 0) {
    unaff_r5 = (undefined4 *)(&DAT_020924b0 + param_2 * 8);
  }
  else if (param_1 == 1) {
    unaff_r5 = (undefined4 *)(&DAT_02092700 + param_2 * 8);
  }
  else if (param_1 == 2) {
    iVar2 = ALStreamImp::Create(s_chr_col_item_bin_0217290c);
    *piVar1 = iVar2;
    unaff_r5 = (undefined4 *)0x0;
  }
  if (unaff_r5 != (undefined4 *)0x0) {
    thunk_FUN_0207400c(auStack_38,s_chr_col__02172920);
    thunk_FUN_020741c4(auStack_38,*unaff_r5);
    thunk_FUN_020741c4(auStack_38,&DAT_0217292c);
    iVar2 = ALStreamImp::Create(auStack_38);
    *piVar1 = iVar2;
    thunk_FUN_0207400c(auStack_38,s_chr_shot__02172934);
    thunk_FUN_020741c4(auStack_38,*unaff_r5);
    thunk_FUN_020741c4(auStack_38,&DAT_0217292c);
    iVar2 = FUN_02033bb8(auStack_38);
    if (iVar2 != 0) {
      iVar2 = ALStreamImp::Create(auStack_38);
      piVar1[1] = iVar2;
    }
    thunk_FUN_0207400c(auStack_38,s_chr_effect__02172940);
    thunk_FUN_020741c4(auStack_38,*unaff_r5);
    thunk_FUN_020741c4(auStack_38,&DAT_0217292c);
    iVar2 = FUN_02033bb8(auStack_38);
    if (iVar2 != 0) {
      iVar2 = ALStreamImp::Create(auStack_38);
      piVar1[2] = iVar2;
    }
  }
  iVar2 = (**(code **)(**(int **)(*piVar1 + 4) + 0x2c))(*(int **)(*piVar1 + 4),0);
  piVar1[3] = iVar2;
  if (piVar1[1] != 0) {
    piVar3 = *(int **)(piVar1[1] + 4);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
    piVar1[4] = iVar2;
  }
  if (piVar1[2] != 0) {
    piVar3 = *(int **)(piVar1[2] + 4);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
    piVar1[5] = iVar2;
  }
  return piVar1;
}

