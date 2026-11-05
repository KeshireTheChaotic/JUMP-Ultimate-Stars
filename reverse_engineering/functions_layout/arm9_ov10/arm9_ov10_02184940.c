
undefined4 FUN_02184940(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_290;
  undefined1 auStack_28c [33];
  undefined1 auStack_26b [512];
  undefined1 auStack_6b [87];
  
  iVar3 = *param_1;
  FUN_02185028(param_2 + 0x80,0x20);
  if (*(char *)(param_2 + 0x1c2) == '\0') {
    iVar4 = iVar3 + 0x177;
  }
  else {
    iVar4 = param_2 + 0x1c2;
  }
  uVar1 = FUN_02004b04(iVar4);
  FUN_0200178c(iVar4,uVar1,param_2 + 0xa1);
  if (*(char *)(param_2 + 0xc2) == '\0') {
    if (*(char *)(iVar3 + 0x12f) == '\0') {
      FUN_02003ce0(auStack_6b,s__s__s_021a5608,iVar3 + 0x110,iVar3 + 0x144);
      puVar2 = auStack_6b;
    }
    else {
      puVar2 = (undefined1 *)(iVar3 + 0x12f);
    }
  }
  else {
    puVar2 = (undefined1 *)(param_2 + 0xc2);
  }
  FUN_02003ce0(auStack_26b,s__s_s_s_s_s_s_021a5610,param_2 + 0xa1,s__021a5620,puVar2,param_2 + 0x80,
               param_2,param_2 + 0xa1);
  uVar1 = FUN_02004b04(auStack_26b);
  FUN_0200178c(auStack_26b,uVar1,auStack_28c);
  if (*(int *)(iVar3 + 0x100) != 0) {
    FUN_02187560(param_1,iVar3 + 0x110,iVar3 + 0x144,&local_290);
    if (local_290 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x19c) = local_290[1];
      *(undefined4 *)(iVar3 + 0x1a0) = *local_290;
    }
  }
  FUN_02183b94(param_1,iVar3 + 500,s__login__021a56f4);
  FUN_02183b94(param_1,iVar3 + 500,s__challenge__021a5580);
  FUN_02183b94(param_1,iVar3 + 500,param_2 + 0x80);
  if (*(char *)(param_2 + 0xc2) == '\0') {
    if (*(char *)(iVar3 + 0x12f) == '\0') {
      FUN_02183b94(param_1,iVar3 + 500,s__user__021a5708);
      FUN_02183b94(param_1,iVar3 + 500,iVar3 + 0x110);
      FUN_02183b94(param_1,iVar3 + 500,&DAT_021a5710);
      FUN_02183b94(param_1,iVar3 + 500,iVar3 + 0x144);
    }
    else {
      FUN_02183b94(param_1,iVar3 + 500,s__uniquenick__021a55f0);
      FUN_02183b94(param_1,iVar3 + 500,iVar3 + 0x12f);
    }
  }
  else {
    FUN_02183b94(param_1,iVar3 + 500,s__authtoken__021a56fc);
    FUN_02183b94(param_1,iVar3 + 500,param_2 + 0xc2);
  }
  if (*(int *)(iVar3 + 0x19c) != 0) {
    FUN_02183b94(param_1,iVar3 + 500,s__userid__021a5594);
    FUN_02183b70(param_1,iVar3 + 500,*(undefined4 *)(iVar3 + 0x19c));
  }
  if (*(int *)(iVar3 + 0x1a0) != 0) {
    FUN_02183b94(param_1,iVar3 + 500,s__profileid__021a55d0);
    FUN_02183b70(param_1,iVar3 + 500,*(undefined4 *)(iVar3 + 0x1a0));
  }
  FUN_02183b94(param_1,iVar3 + 500,s__response__021a5714);
  FUN_02183b94(param_1,iVar3 + 500,auStack_28c);
  if (*(int *)(iVar3 + 0x10c) == 1) {
    FUN_02183b94(param_1,iVar3 + 500,s__firewall_1_021a5720);
  }
  FUN_02183b94(param_1,iVar3 + 500,s__port__021a572c);
  FUN_02183b70(param_1,iVar3 + 500,
               (int)(short)((ushort)(*(uint *)(iVar3 + 0x208) >> 8) & 0xff |
                           (ushort)((*(uint *)(iVar3 + 0x208) & 0xff) << 8)));
  FUN_02183b94(param_1,iVar3 + 500,s__productid__021a56b8);
  FUN_02183b70(param_1,iVar3 + 500,*(undefined4 *)(iVar3 + 0x46c));
  FUN_02183b94(param_1,iVar3 + 500,s__gamename__021a56c4);
  FUN_02183b94(param_1,iVar3 + 500,&DAT_020a0604);
  FUN_02183b94(param_1,iVar3 + 500,s__namespaceid__021a56d0);
  FUN_02183b70(param_1,iVar3 + 500,*(undefined4 *)(iVar3 + 0x470));
  FUN_02183b94(param_1,iVar3 + 500,s__id_1_021a56ec);
  FUN_02183b94(param_1,iVar3 + 500,s__final__021a54dc);
  return 0;
}

