
undefined4 FUN_02184748(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte local_100 [31];
  undefined1 auStack_e1 [45];
  byte local_b4 [65];
  undefined1 auStack_73 [95];
  
  iVar4 = *param_1;
  uVar2 = FUN_02004b04(iVar4 + 0x177);
  FUN_02001924(0x79707367);
  uVar3 = 0;
  if (uVar2 != 0) {
    pbVar5 = local_100;
    do {
      bVar1 = FUN_02001908(0,0xff);
      *pbVar5 = bVar1 ^ *(byte *)(iVar4 + uVar3 + 0x177);
      pbVar5 = pbVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  local_100[uVar3] = 0;
  FUN_020017e4(local_100,auStack_e1,uVar2,1);
  FUN_02183b94(param_1,iVar4 + 500,s__newuser__021a568c);
  FUN_02183b94(param_1,iVar4 + 500,s__email__021a5698);
  FUN_02183b94(param_1,iVar4 + 500,iVar4 + 0x144);
  FUN_02183b94(param_1,iVar4 + 500,s__nick__021a56a0);
  FUN_02183b94(param_1,iVar4 + 500,iVar4 + 0x110);
  FUN_02183b94(param_1,iVar4 + 500,s__passwordenc__021a56a8);
  FUN_02183b94(param_1,iVar4 + 500,auStack_e1);
  FUN_02183b94(param_1,iVar4 + 500,s__productid__021a56b8);
  FUN_02183b70(param_1,iVar4 + 500,*(undefined4 *)(iVar4 + 0x46c));
  FUN_02183b94(param_1,iVar4 + 500,s__gamename__021a56c4);
  FUN_02183b94(param_1,iVar4 + 500,&DAT_020a0604);
  FUN_02183b94(param_1,iVar4 + 500,s__namespaceid__021a56d0);
  FUN_02183b70(param_1,iVar4 + 500,*(undefined4 *)(iVar4 + 0x470));
  FUN_02183b94(param_1,iVar4 + 500,s__uniquenick__021a55f0);
  FUN_02183b94(param_1,iVar4 + 500,iVar4 + 0x12f);
  if (*(char *)(param_2 + 0x2c2) != '\0') {
    uVar2 = FUN_02004b04(param_2 + 0x2c2);
    FUN_02001924(0x79707367);
    uVar3 = 0;
    if (uVar2 != 0) {
      pbVar5 = local_b4;
      do {
        bVar1 = FUN_02001908(0,0xff);
        *pbVar5 = bVar1 ^ *(byte *)(param_2 + uVar3 + 0x2c2);
        pbVar5 = pbVar5 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    local_b4[uVar3] = 0;
    FUN_020017e4(local_b4,auStack_73,uVar2,1);
    FUN_02183b94(param_1,iVar4 + 500,s__cdkeyenc__021a56e0);
    FUN_02183b94(param_1,iVar4 + 500,auStack_73);
  }
  FUN_02183b94(param_1,iVar4 + 500,s__id_1_021a56ec);
  FUN_02183b94(param_1,iVar4 + 500,s__final__021a54dc);
  return 0;
}

