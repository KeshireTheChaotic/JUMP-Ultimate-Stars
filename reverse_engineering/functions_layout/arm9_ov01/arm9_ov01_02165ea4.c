
/* JUS-GAME Result::Result_Add [source-string] __FILE__="Result.cpp" __FUNCTION__="Result_Add"
   lines=[201] passed to 1 source-location call(s) */

undefined4
Result::Result_Add(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar2 = (undefined4 *)thunk_FUN_0201a228(0x98,s_Result_cpp_0216d870,s_Result_Add_0216d6ec,0xc9);
  FUN_0214ff80(puVar2,0x98);
  uVar3 = FUN_02026f94();
  puVar2[1] = uVar3;
  FUN_0215f948(auStack_14,0x80);
  FUN_0214ffd0(puVar2[1],auStack_14);
  FUN_02157480(puVar2[1],FUN_02166098 + 1);
  FUN_02150004(puVar2[1],puVar2);
  *(undefined1 *)(puVar2 + 0x25) = param_1;
  uVar3 = FUN_020310f4();
  *puVar2 = uVar3;
  FUN_0214ff94();
  iVar4 = FUN_02086bd4();
  if (iVar4 != 0) {
    FUN_0208730c();
    FUN_02087250();
    FUN_02167414(puVar2);
  }
  FUN_021665ec();
  piVar5 = (int *)FUN_020101f4(s_chr_ChrArc_aar_0216d87c,0);
  ALNodeImp::Create(puVar2);
  (**(code **)(*piVar5 + 0xc))();
  if (*(char *)(puVar2 + 0x25) == '\0') {
    uVar3 = ResultRank::ResultRank_Create(0);
    puVar2[0x1c] = uVar3;
  }
  else {
    uVar3 = ResultRank::ResultRank_Create(1);
    puVar2[0x1c] = uVar3;
    uVar3 = FUN_0216603c();
    uVar3 = SelectStandbyBar::SelectStandbyBar_Create(uVar3,0x20,2);
    puVar2[0x1f] = uVar3;
    FUN_0216604c(uVar3,FUN_02167688 + 1,puVar2,5);
    FUN_0216604c(puVar2[0x1f],FUN_021676a0 + 1,puVar2,2);
    FUN_0216604c(puVar2[0x1f],FUN_021676e8 + 1,puVar2,1);
    FUN_0216604c(puVar2[0x1f],FUN_021676fc + 1,puVar2,4);
    uVar3 = FUN_02026f94();
    puVar2[2] = uVar3;
    FUN_0215f948(auStack_18,0x80);
    FUN_0214ffd0(puVar2[2],auStack_18);
    FUN_02157480(puVar2[2],FUN_021665b0 + 1);
    FUN_02150004(puVar2[2],puVar2);
  }
  FUN_02073ebc(2,1);
  iVar4 = FUN_02166058();
  if (iVar4 == 0) {
    FUN_02166078();
    iVar4 = FUN_02166088();
    if (iVar4 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    FUN_02166078();
    iVar4 = FUN_02166068();
    if (iVar4 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    FUN_020734e0(0x30);
    FUN_0207361c(0x30,0);
  }
  else {
    FUN_020734e0(0x31);
    FUN_0207361c(0x31,0);
  }
  uVar6 = FUN_02054b44();
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  thunk_EXT_FUN_021b65bc();
  return *puVar2;
}

