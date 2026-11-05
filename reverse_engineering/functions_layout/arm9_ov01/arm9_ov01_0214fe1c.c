
/* JUS-GAME JArenaMissionTry::JAMissionTry_Add [source-string] __FILE__="JArenaMissionTry.cpp"
   __FUNCTION__="JAMissionTry_Add" lines=[231] passed to 1 source-location call(s) */

undefined4 JArenaMissionTry::JAMissionTry_Add(undefined1 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  FUN_020734e0(0x34);
  FUN_0207361c(0x34,0);
  puVar1 = (undefined1 *)
           thunk_FUN_0201a228(0x15c,s_JArenaMissionTry_cpp_0216bfdc,s_JAMissionTry_Add_0216bea4,0xe7
                             );
  FUN_0214ff80(puVar1,0x15c);
  uVar2 = FUN_020310f4();
  *(undefined4 *)(puVar1 + 4) = uVar2;
  FUN_0214ff94();
  uVar2 = FUN_02020d90();
  FUN_0214dc10(auStack_14,0x85);
  FUN_0214ffd0(uVar2,auStack_14);
  FUN_0214fff4(uVar2,FUN_021500d8 + 1);
  FUN_02150004(uVar2,puVar1);
  *(undefined4 *)(puVar1 + 8) = uVar2;
  uVar2 = FUN_02020d90();
  FUN_0214dc10(auStack_18,0x86);
  FUN_0214ffd0(uVar2,auStack_18);
  FUN_0214fff4(uVar2,FUN_021502d8 + 1);
  FUN_02150004(uVar2,puVar1);
  *(undefined4 *)(puVar1 + 0xc) = uVar2;
  uVar2 = FUN_02028920(0);
  *(undefined4 *)(puVar1 + 0x10) = uVar2;
  piVar3 = (int *)FUN_020101f4(s_jgalaxy_jgalaxy_aar_0216bff4,0);
  uVar2 = MissionData::MissionData_Create(0);
  *(undefined4 *)(puVar1 + 0x140) = uVar2;
  uVar2 = TitleData::TitleData_Create();
  *(undefined4 *)(puVar1 + 0x148) = uVar2;
  uVar2 = RuleData::RuleData_Create();
  *(undefined4 *)(puVar1 + 0x144) = uVar2;
  puVar1[0x158] = param_1;
  *puVar1 = 0;
  FUN_021504f0();
  FUN_021507a0(puVar1);
  FUN_0215081c(puVar1);
  FUN_02150acc(puVar1);
  FUN_02151ac8(puVar1);
  JAMissionTry_InitPanelWidgetItem(puVar1);
  FUN_0215001c(FUN_0214fdfc);
  FUN_0215002c(0x30078);
  FUN_02150074(0x10078);
  FUN_02150088(0x10000,0x30078);
  FUN_02073ebc(2,1);
  if (*(int *)(puVar1 + 0x4c) != 0) {
    FUN_02150094();
  }
  if (puVar1[0x159] != '\0') {
    *(uint *)(puVar1 + 0x150) = *(uint *)(puVar1 + 0x150) | 0x7c;
  }
  (**(code **)(*piVar3 + 0xc))();
  return *(undefined4 *)(puVar1 + 4);
}

