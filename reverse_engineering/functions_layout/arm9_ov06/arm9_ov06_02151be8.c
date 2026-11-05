
/* JUS-GAME BattleCamera::Battle_CameraCreate [source-string] __FILE__="BattleCamera.cpp"
   __FUNCTION__="Battle_CameraCreate" lines=[34] passed to 1 source-location call(s) */

undefined4 BattleCamera::Battle_CameraCreate(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  uVar2 = thunk_FUN_0201a228(0x34,PTR_s_BattleCamera_cpp_02151d98,PTR_s_Battle_CameraCreate_02151d9c
                             ,0x22);
  *(undefined4 *)PTR_DAT_02151da0 = uVar2;
  FUN_020517fc(uVar2,0,0x34);
  uVar2 = FUN_02026f94();
  puVar1 = PTR_DAT_02151da0;
  **(undefined4 **)PTR_DAT_02151da0 = uVar2;
  uStack_28 = 0x99000;
  (**(code **)(**(int **)(**(int **)puVar1 + 4) + 0xa0))(*(int **)(**(int **)puVar1 + 4),&uStack_28)
  ;
  FUN_02028384(*(undefined4 *)(**(int **)PTR_DAT_02151da0 + 4),PTR_FUN_02151da4);
  (**(code **)(**(int **)(**(int **)PTR_DAT_02151da0 + 4) + 0x24))();
  (**(code **)(**(int **)(**(int **)PTR_DAT_02151da0 + 4) + 0x94))
            (*(int **)(**(int **)PTR_DAT_02151da0 + 4),0x200000);
  uVar2 = FUN_02020d90();
  puVar1 = PTR_DAT_02151da0;
  *(undefined4 *)(*(int *)PTR_DAT_02151da0 + 4) = uVar2;
  uStack_c = 0;
  auStack_8[0] = 0;
  FUN_021519d0(*(undefined4 *)(*(int *)puVar1 + 4),auStack_8,&uStack_c);
  uStack_14 = 0x1000;
  uStack_10 = 0x1000;
  FUN_02151da8(*(undefined4 *)(*(int *)PTR_DAT_02151da0 + 4),&uStack_10,&uStack_14);
  piVar3 = *(int **)(*(int *)(*(int *)PTR_DAT_02151da0 + 4) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  uVar2 = FUN_02020d90();
  puVar1 = PTR_DAT_02151da0;
  *(undefined4 *)(*(int *)PTR_DAT_02151da0 + 8) = uVar2;
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_021519d0(*(undefined4 *)(*(int *)puVar1 + 8),&uStack_18,&uStack_1c);
  uStack_24 = 0x1000;
  uStack_20 = 0x1000;
  FUN_02151da8(*(undefined4 *)(*(int *)PTR_DAT_02151da0 + 8),&uStack_20,&uStack_24);
  piVar3 = *(int **)(*(int *)(*(int *)PTR_DAT_02151da0 + 8) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  return *(undefined4 *)PTR_DAT_02151da0;
}

