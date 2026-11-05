
/* JUS-GAME StageSelect::StageSelect_Add [source-string] __FILE__="StageSelect.cpp"
   __FUNCTION__="StageSelect_Add" lines=[304] passed to 1 source-location call(s) */

undefined4 StageSelect::StageSelect_Add(undefined1 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_28 [4];
  undefined4 *local_24;
  code *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0xb4,s_StageSelect_cpp_0216cd98,s_StageSelect_Add_0216ccb4,0x130);
  FUN_0214ff80(puVar1,0xb4);
  *(byte *)((int)puVar1 + 0xb2) = *(byte *)((int)puVar1 + 0xb2) | 4;
  *(undefined1 *)(puVar1 + 0x2b) = param_1;
  uVar2 = FUN_02026f94();
  puVar1[1] = uVar2;
  FUN_0215f948(auStack_28,0x80);
  FUN_0214ffd0(puVar1[1],auStack_28);
  FUN_02157480(puVar1[1],FUN_02161578);
  FUN_02150004(puVar1[1],puVar1);
  uVar2 = FUN_020310f4();
  *puVar1 = uVar2;
  FUN_0214ff94();
  uVar2 = FUN_02028920(0);
  puVar1[2] = uVar2;
  uVar2 = thunk_FUN_020208ec(0);
  puVar1[3] = uVar2;
  uVar2 = FUN_0215f960();
  puVar1[0x1f] = uVar2;
  FUN_0215f970(0x16000);
  FUN_0215f9d4();
  uVar3 = FUN_0215f980();
  iVar4 = FUN_02161df4();
  if (iVar4 == 0) {
    uVar5 = 0;
    do {
      iVar4 = FUN_02161df4(uVar5);
      if (iVar4 != 0) {
        uVar3 = uVar5;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x24);
  }
  uVar2 = func_0x021ba49c(1,0,1);
  puVar1[0x10] = uVar2;
  FUN_0215fc68(puVar1,uVar3);
  if (*(char *)(puVar1 + 0x2b) == '\0') {
    uVar2 = func_0x021c2b58(uVar3 & 0xff,1,0);
    puVar1[0xc] = uVar2;
  }
  else {
    uVar2 = func_0x021c2b58(uVar3 & 0xff,2,0);
    puVar1[0xc] = uVar2;
    local_18 = &LAB_02161f28;
    local_20 = FUN_02161edc;
    local_1c = &LAB_02161f08;
    local_14 = puVar1[0x10];
    local_24 = puVar1;
    uVar2 = CommWrapDisconnect::CommWrapDisconnect_Create(&local_24);
    puVar1[0x11] = uVar2;
    FUN_0215f990(puVar1[0xf],puVar1[0x11]);
  }
  FUN_02073ebc(2,1);
  FUN_02161470();
  FUN_021574d8(puVar1[0x12],1);
  FUN_02150094(puVar1[0x14]);
  FUN_021574d8(puVar1[0x14],1);
  FUN_021574d8(puVar1[0x13],0);
  FUN_021574c8(puVar1[0x13]);
  FUN_0215f998(puVar1[0x13]);
  FUN_021574d8(puVar1[0x1d],1);
  FUN_020734e0(0x2f);
  FUN_0207361c(0x2f,0);
  thunk_EXT_FUN_021b65bc();
  FUN_0215f9b4(puVar1[0xc]);
  return *puVar1;
}

