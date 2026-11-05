
/* JUS-GAME ComicDeckDisp::ComicDeck_DispCreate [source-string] __FILE__="ComicDeckDisp.cpp"
   __FUNCTION__="ComicDeck_DispCreate" lines=[36] passed to 1 source-location call(s) */

int ComicDeckDisp::ComicDeck_DispCreate
              (int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_28 [3];
  int local_1c;
  
                    /* JUS-TAG
                       strings=["ComicDeckDisp.cpp","ComicDeck_DispCreate","deckmake/cdeck_obj.aar","deckmake/deckmake.aar"]
                        */
  iVar2 = thunk_FUN_0201a228(0xd4,s_ComicDeckDisp_cpp_0209f650,s_ComicDeck_DispCreate_0209f638,0x24)
  ;
  FUN_020517fc(iVar2,0,0xd4);
  *(undefined1 *)(iVar2 + 0xd0) = param_4;
  *(undefined1 *)(iVar2 + 0xd1) = param_5;
  iVar3 = FUN_02026f94();
  *(int *)(iVar2 + 8) = iVar3;
  local_28[1] = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),local_28 + 1);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 8) + 4),FUN_02078f84);
  piVar4 = *(int **)(*(int *)(iVar2 + 8) + 4);
  (**(code **)(*piVar4 + 0x24))(piVar4,iVar2);
  if (param_1 == 0) {
    iVar3 = FUN_0203b414();
  }
  else {
    iVar3 = FUN_0203b424(param_2);
  }
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x88);
  if (*(int *)(DAT_0214bd80 + 0x18e4) != 0) {
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4),1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4),4);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4),0x20,0x20);
    piVar4 = *(int **)(*(int *)(iVar2 + 0x10) + 4);
    (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
    local_28[0] = param_3 << 0xc;
    piVar4 = *(int **)(*(int *)(iVar2 + 0x10) + 4);
    (**(code **)(*piVar4 + 0x10))(piVar4,local_28);
  }
  FUN_02078f54();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 4);
  uVar5 = FUN_02020d90();
  *(undefined4 *)(iVar2 + 200) = uVar5;
  local_28[2] = (int)*(short *)(iVar2 + 0xce) << 0xc;
  local_1c = (int)*(short *)(iVar2 + 0xcc) << 0xc;
  FUN_0206c9f8(*(undefined4 *)(iVar2 + 200),&local_1c,local_28 + 2);
  piVar4 = *(int **)(*(int *)(iVar2 + 200) + 4);
  (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  FUN_0206c54c();
  piVar4 = (int *)FUN_020101f4(s_deckmake_deckmake_aar_0209f664,0);
  FUN_02078f54();
  if (param_1 == 0) {
    iVar3 = FUN_0203b3e4();
    iVar3 = *(int *)(iVar3 + 0x88);
  }
  else {
    iVar3 = FUN_0203b3f4();
    iVar3 = *(int *)(iVar3 + 0x88);
  }
  DAT_020a0dd0 = *(undefined4 *)(iVar3 + 4);
  uVar5 = FUN_020101f4(s_deckmake_cdeck_obj_aar_0209f67c,0);
  *(undefined4 *)(iVar2 + 0xc) = uVar5;
  iVar3 = 0;
  do {
    uVar5 = FUN_02079cbc(0x6f0000,*(undefined4 *)(iVar2 + 200));
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + iVar1 + 100) = uVar5;
  } while (iVar3 < 5);
  if (*(char *)(iVar2 + 0xd1) != '\0') {
    iVar3 = 0;
    do {
      uVar5 = FUN_02079cbc(0x6f0000,*(undefined4 *)(iVar2 + 200));
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + iVar1 + 0x78) = uVar5;
    } while (iVar3 < 0x10);
  }
  FUN_0206c54c();
  (**(code **)(*piVar4 + 0xc))();
  return iVar2;
}

