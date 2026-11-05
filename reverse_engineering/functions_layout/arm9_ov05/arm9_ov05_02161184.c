
/* JUS-GAME DeckMakeTutorial::DeckMakeTutorial_Add [source-string] __FILE__="DeckMakeTutorial.cpp"
   __FUNCTION__="DeckMakeTutorial_Add" lines=[75] passed to 1 source-location call(s) */

undefined4 DeckMakeTutorial::DeckMakeTutorial_Add(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x7c,s_DeckMakeTutorial_cpp_02171148,s_DeckMakeTutorial_Add_02171130,
                              0x4b);
  FUN_020517fc(puVar1,0,0x7c);
  iVar2 = FUN_02026f94();
  puVar1[0xd] = iVar2;
  local_10 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_10);
  FUN_02028384(*(undefined4 *)(puVar1[0xd] + 4),FUN_02161940);
  (**(code **)(**(int **)(puVar1[0xd] + 4) + 0x24))(*(int **)(puVar1[0xd] + 4),puVar1);
  func_0x021b65bc();
  FUN_02041f7c(DAT_020a0f64,1);
  iVar2 = FUN_020310f4();
  puVar1[0xc] = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  uVar3 = FUN_02028920(0);
  puVar1[9] = uVar3;
  uVar3 = FUN_02028920(0);
  puVar1[8] = uVar3;
  uVar3 = FUN_020208ec(0);
  puVar1[10] = uVar3;
  piVar4 = (int *)FUN_020101f4(s_deckmake_deckmake_aar_02171160,0);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  uVar3 = FUN_020101f4(s_deckmake_tutorial_d_aar_02171178,0);
  puVar1[0xb] = uVar3;
  iVar2 = FUN_0203b3f4();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  uVar3 = FUN_021615d8(0x6b0000);
  puVar1[0xe] = uVar3;
  local_18 = 0x20000;
  FUN_0214d494(puVar1[0xe],&local_18);
  FUN_02023894(*(undefined4 *)(puVar1[0xe] + 4),0x6b0000,0);
  (**(code **)(**(int **)(*(int *)(puVar1[0xe] + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(puVar1[0xe] + 4) + 0xd8))(*(int **)(puVar1[0xe] + 4),0);
  FUN_020282f4(*(undefined4 *)(puVar1[0xe] + 4));
  FUN_02028384(*(undefined4 *)(puVar1[0xe] + 4),FUN_02161604);
  (**(code **)(**(int **)(puVar1[0xe] + 4) + 0x24))(*(int **)(puVar1[0xe] + 4),puVar1);
  iVar2 = FUN_0203b3e4();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  uVar3 = FUN_021615d8(0x6b0000);
  puVar1[0xf] = uVar3;
  local_14 = 0x20000;
  FUN_0214d494(puVar1[0xf],&local_14);
  FUN_02023894(*(undefined4 *)(puVar1[0xf] + 4),0x6b0002,0);
  (**(code **)(**(int **)(*(int *)(puVar1[0xf] + 4) + 0x68) + 0x6c))();
  iVar2 = *(int *)(*(int *)(puVar1[0xf] + 4) + 0x50);
  *(undefined4 *)(iVar2 + 0xc) = 0xe8000;
  *(undefined4 *)(iVar2 + 0x10) = 0xb4000;
  FUN_02150090(iVar2,1);
  (**(code **)(**(int **)(puVar1[0xf] + 4) + 0xd8))(*(int **)(puVar1[0xf] + 4),0);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  uVar3 = CommonTutorial::CommonTutorial_Create(s_deckmake_tutorial_bin_02171190,1);
  puVar1[2] = uVar3;
  (**(code **)(*piVar4 + 0xc))();
  FUN_0206bb68(puVar1[2],puVar1 + 8,puVar1 + 10);
  *(undefined4 **)(puVar1[2] + 0x1c) = puVar1;
  *(code **)(puVar1[2] + 0x10) = FUN_0216163c;
  *(code **)(puVar1[2] + 0x14) = FUN_021617b8;
  *(code **)(puVar1[2] + 0x18) = FUN_0216181c;
  uVar3 = func_0x021bcf1c(0x15,0xffffffff,0,0);
  *puVar1 = uVar3;
  uVar3 = ComicDeck::ComicDeckCreate(2,1);
  puVar1[3] = uVar3;
  uVar3 = FUN_02076908();
  puVar1[4] = uVar3;
  FUN_02070d14(0);
  FUN_02078aa0();
  uVar3 = FUN_02070d14(0);
  FUN_020769cc(puVar1[4],uVar3);
  FUN_0214e598(0x334);
  FUN_0214e598(0x337);
  FUN_0214e598(0x1f1);
  FUN_0214e598(500);
  FUN_0214e598(0x1c2);
  FUN_0214e598(0x1c3);
  FUN_0214e598(0x5f);
  FUN_0214e598(0x2e2);
  uVar3 = func_0x021ba49c(1,0,0);
  puVar1[1] = uVar3;
  uVar3 = FUN_02070684();
  uVar5 = FUN_02070690();
  uVar3 = KomaList::KomaList_Create(0,puVar1[4],0,uVar3,uVar5,0);
  puVar1[6] = uVar3;
  FUN_0214fdb0(uVar3,FUN_02161840,puVar1);
  FUN_020734e0(4);
  FUN_02073744(0x79);
  FUN_0207361c(4,0);
  FUN_02073ebc(2,1);
  return puVar1[0xc];
}

