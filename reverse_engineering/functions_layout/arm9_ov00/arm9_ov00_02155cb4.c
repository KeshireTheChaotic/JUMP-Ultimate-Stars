
/* JUS-GAME TopMenuChara::TopMenu_CharaCreate [source-string] __FILE__="TopMenuChara.cpp"
   __FUNCTION__="TopMenu_CharaCreate" lines=[115] passed to 1 source-location call(s) */

int TopMenuChara::TopMenu_CharaCreate(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = thunk_FUN_0201a228(0x224,s_TopMenuChara_cpp_021612f4,s_TopMenu_CharaCreate_021612cc,0x73);
  FUN_020517fc(iVar1,0,0x224);
  uVar2 = FUN_020101f4(s_chr_ChrArc_aar_02161308,0);
  *(undefined4 *)(iVar1 + 0x13c) = uVar2;
  iVar3 = FUN_02026f94();
  *(int *)(iVar1 + 0x124) = iVar3;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x124) + 4),FUN_021561d0);
  piVar4 = *(int **)(*(int *)(iVar1 + 0x124) + 4);
  (**(code **)(*piVar4 + 0x24))(piVar4,iVar1);
  uVar2 = ComicDeck::ComicDeckCreate(0,1);
  *(undefined4 *)(iVar1 + 0x134) = uVar2;
  uVar2 = FUN_02076908();
  *(undefined4 *)(iVar1 + 0x138) = uVar2;
  *(undefined4 *)(iVar1 + 0x208) = 0;
  for (uVar7 = 0; uVar5 = FUN_02071f54(), uVar7 < uVar5; uVar7 = uVar7 + 1) {
    uVar2 = FUN_02071f10(uVar7);
    FUN_020769cc(*(undefined4 *)(iVar1 + 0x138),uVar2);
    iVar3 = FUN_0207879c(*(undefined4 *)(iVar1 + 0x138));
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0x208);
      *(int *)(iVar1 + 0x208) = iVar3 + 1;
      *(uint *)(iVar1 + iVar3 * 4 + 0x140) = uVar7;
    }
  }
  FUN_02076c18(*(undefined4 *)(iVar1 + 0x138));
  FUN_02076c7c(*(undefined4 *)(iVar1 + 0x138),&DAT_02161318);
  if (*(int *)(iVar1 + 0x208) != 0) {
    iVar3 = FUN_02156060();
    *(int *)(iVar1 + 0x20c) = iVar3;
    uVar2 = FUN_02071f10(*(undefined4 *)(iVar1 + iVar3 * 4 + 0x140));
    FUN_020769cc(*(undefined4 *)(iVar1 + 0x138),uVar2);
  }
  *(undefined1 *)(iVar1 + 0x21f) = 0;
  CommonEffect::CommonEffect_Init();
  DAT_020afc41 = 1;
  iVar3 = FUN_0203b3e4();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar2;
  iVar3 = func_0x021caa0c(s_font_js8font_aft_0216131c,0,0);
  piVar4 = (int *)func_0x021c5fb4(*(undefined4 *)(iVar3 + 4));
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar6 = piVar4[6];
  *(int *)(iVar1 + 0x130) = iVar6;
  piVar4 = *(int **)(*(int *)(iVar6 + 4) + 100);
  (**(code **)(*piVar4 + 0x88))(piVar4,0x100);
  piVar4 = *(int **)(*(int *)(*(int *)(iVar1 + 0x130) + 4) + 100);
  (**(code **)(*piVar4 + 0x84))(piVar4,0);
  piVar4 = *(int **)(*(int *)(*(int *)(iVar1 + 0x130) + 4) + 100);
  (**(code **)(*piVar4 + 0xa8))(piVar4,0);
  local_18 = 0xb8000;
  local_14 = 0x100000;
  FUN_0214f418(*(undefined4 *)(iVar1 + 0x130),&local_14,&local_18);
  local_1c = 0x60000;
  FUN_0214eed0(*(undefined4 *)(iVar1 + 0x130),&local_1c);
  piVar4 = *(int **)(*(int *)(iVar1 + 0x130) + 4);
  (**(code **)(*piVar4 + 0x24))(piVar4,iVar1);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x130) + 4),FUN_021566c8);
  piVar4 = *(int **)(*(int *)(iVar1 + 0x130) + 4);
  (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  uVar2 = FUN_02020d90();
  *(undefined4 *)(iVar1 + 300) = uVar2;
  local_24 = 0xb6000;
  local_20 = 0;
  FUN_0214f418(*(undefined4 *)(iVar1 + 300),&local_20,&local_24);
  piVar4 = *(int **)(*(int *)(iVar1 + 300) + 4);
  (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  iVar3 = FUN_02026f94();
  *(int *)(iVar1 + 0x128) = iVar3;
  FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_02156e64);
  piVar4 = *(int **)(*(int *)(iVar1 + 0x128) + 4);
  (**(code **)(*piVar4 + 0x24))(piVar4,iVar1);
  iVar3 = 0;
  do {
    iVar6 = iVar3 * 0x48 + iVar1;
    *(undefined2 *)(iVar6 + 0xc) = 0x20;
    *(undefined2 *)(iVar6 + 0xe) = 0x30;
    *(char *)(iVar1 + iVar3 + 0x218) = (char)iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_02156180(iVar1);
  return iVar1;
}

