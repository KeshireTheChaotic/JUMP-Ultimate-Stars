
/* JUS-GAME JArenaRankBtlAfterLstAll::JARBAftLstAll_Add [source-string]
   __FILE__="JArenaRankBtlAfterLstAll.cpp" __FUNCTION__="JARBAftLstAll_Add" lines=[139] passed to 1
   source-location call(s) */

undefined4
JArenaRankBtlAfterLstAll::JARBAftLstAll_Add
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  puVar2 = (undefined1 *)
           thunk_FUN_0201a228(0x58c,s_JArenaRankBtlAfterLstAll_cpp_0215e378,FUN_0215e24c,0x8b);
  FUN_0215271c(puVar2,0x58c);
  uVar3 = FUN_02020d90();
  FUN_02152754(auStack_18,0x85);
  FUN_02152730(uVar3,auStack_18);
  FUN_02152760(uVar3,FUN_021527c0);
  FUN_02152770(uVar3,puVar2);
  FUN_0214fb44(uVar3,param_1);
  *(undefined4 *)(puVar2 + 4) = uVar3;
  uVar1 = FUN_02152788(param_1);
  puVar2[2] = uVar1;
  *puVar2 = 0x21;
  puVar2[0x58a] = 0x13;
  puVar2[0x58b] = 0;
  uVar4 = FUN_02028920();
  *(undefined4 *)(puVar2 + 8) = uVar4;
  uVar4 = PopularNameData::PopularNameData_Create();
  *(undefined4 *)(puVar2 + 0x564) = uVar4;
  FUN_021529f0();
  FUN_02152ef4(puVar2);
  FUN_021532c8(puVar2);
  FUN_02153508(puVar2);
  FUN_0215369c(puVar2);
  FUN_02073ebc(2,1);
  return uVar3;
}

