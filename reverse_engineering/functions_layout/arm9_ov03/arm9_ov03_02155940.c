
/* JUS-GAME JArenaRankBtlAfterLstSel::JARBAftLstSel_Add [source-string]
   __FILE__="JArenaRankBtlAfterLstSel.cpp" __FUNCTION__="JARBAftLstSel_Add" lines=[211] passed to 1
   source-location call(s) */

undefined4
JArenaRankBtlAfterLstSel::JARBAftLstSel_Add
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  piVar2 = (int *)FUN_020101f4(&DAT_0215e6a8,0);
  thunk_EXT_FUN_021b65bc();
  puVar3 = (undefined1 *)
           thunk_FUN_0201a228(0xe0,s_JArenaRankBtlAfterLstSel_cpp_0215e6b8,
                              s_JARBAftLstSel_Add_0215e5a4,0xd3);
  FUN_0215271c(puVar3,0xe0);
  uVar4 = FUN_02020d90();
  FUN_02152754(auStack_20,0x85);
  FUN_02152730(uVar4,auStack_20);
  FUN_02152760(uVar4,FUN_02155b24);
  FUN_02152770(uVar4,puVar3);
  FUN_0214fb44(uVar4,param_1);
  *(undefined4 *)(puVar3 + 4) = uVar4;
  uVar1 = FUN_02155acc(param_1);
  puVar3[2] = uVar1;
  *puVar3 = 0x21;
  FUN_0214fb7c(*(undefined4 *)(puVar3 + 4));
  iVar5 = FUN_02155adc();
  iVar8 = 0;
  do {
    if (0x13 < iVar8) {
LAB_02155a1c:
      uVar7 = FUN_02028920(0);
      *(undefined4 *)(puVar3 + 8) = uVar7;
      uVar7 = PopularNameData::PopularNameData_Create();
      *(undefined4 *)(puVar3 + 0xd0) = uVar7;
      FUN_02155d40();
      FUN_02156118(puVar3);
      FUN_021561bc(puVar3);
      FUN_021564a0(puVar3);
      FUN_02158004(puVar3);
      ALWidgetImp::Create(puVar3);
      FUN_02073ebc(2,1);
      if (*(int *)(puVar3 + 0x38) != 0) {
        FUN_02155ae8();
      }
      puVar3[0xdc] = 0xff;
      puVar3[0xdd] = puVar3[0xdc];
      DAT_0215ec34 = puVar3;
      (**(code **)(*piVar2 + 0xc))();
      return uVar4;
    }
    iVar6 = FUN_0214d7d4(puVar3[2],*(undefined1 *)(iVar5 + iVar8 + 0x74));
    if (iVar6 == 0) {
      *(int *)(puVar3 + 0xd8) = iVar8;
      goto LAB_02155a1c;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

