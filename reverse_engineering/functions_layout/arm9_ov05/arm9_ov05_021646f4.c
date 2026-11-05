
void FUN_021646f4(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_70 [64];
  undefined1 auStack_30 [28];
  
  uVar6 = (uint)*(ushort *)(param_2 + 4);
  switch(*(undefined1 *)(param_2 + 2)) {
  case 0:
  default:
    thunk_FUN_0207400c(param_4,&DAT_021713d4);
    break;
  case 1:
    uVar2 = FUN_02076c98(0,uVar6);
    FUN_02075f98(uVar2,uVar6);
    *param_3 = 0;
    thunk_FUN_0207400c(param_4,*(int *)(param_1 + 0xa0) + uVar6 * 0xc +
                               *(int *)(*(int *)(param_1 + 0xa0) + uVar6 * 0xc));
    iVar1 = FUN_02076c98(0,uVar6);
    FUN_02074374(param_4,*(char *)(iVar1 + 8) + 1,1,0);
    thunk_FUN_020741c4(param_4,&DAT_021713cc);
    break;
  case 2:
    FUN_02071790(uVar6);
    *param_3 = 2;
    iVar1 = FUN_021649cc(*(undefined4 *)(param_1 + 0x94),uVar6,*(undefined4 *)(param_1 + 0x108));
    thunk_FUN_0207400c(param_4,*(int *)(param_1 + 0xa0) + iVar1 * 0xc +
                               *(int *)(*(int *)(param_1 + 0xa0) + iVar1 * 0xc));
    break;
  case 3:
    FUN_020717d4(uVar6);
    *param_3 = 3;
    for (uVar5 = 0; uVar5 < *(uint *)(param_1 + 0xc0); uVar5 = uVar5 + 1) {
      puVar3 = (undefined *)(uVar5 * 0x48 + *(int *)(param_1 + 0xbc));
      uVar4 = (uint)(byte)puVar3[0x43];
      bVar7 = uVar4 == 2;
      if (bVar7) {
        uVar4 = (uint)*(short *)(puVar3 + 0x30);
      }
      if (bVar7 && uVar4 == uVar6) goto LAB_0216484c;
    }
    puVar3 = &DAT_021713d4;
LAB_0216484c:
    thunk_FUN_0207400c(param_4,puVar3);
    break;
  case 4:
    FUN_020712c8(uVar6);
    *param_3 = 5;
    uVar2 = FUN_02075190(*(undefined4 *)(param_1 + 0xa8),uVar6);
    thunk_FUN_0207400c(param_4,uVar2);
    break;
  case 5:
    FUN_02071284(uVar6 + 1);
    *param_3 = 10;
    thunk_FUN_0207400c(param_4,*(int *)(param_1 + 0xa4) + (uVar6 + 1) * 4 +
                               *(int *)(*(int *)(param_1 + 0xa4) + (uVar6 + 1) * 4));
    break;
  case 6:
    FUN_02070c84(uVar6,auStack_70);
    FUN_020718fc(uVar6);
    *param_3 = 4;
    thunk_FUN_0207400c(param_4,auStack_30);
    break;
  case 7:
    FUN_0207170c(uVar6 + 1);
    *param_3 = 9;
    uVar2 = FUN_0207452c(*(undefined4 *)(param_1 + 0xb8),uVar6);
    thunk_FUN_0207400c(param_4,uVar2);
    break;
  case 8:
    FUN_02071434(uVar6);
    *param_3 = 8;
    uVar2 = FUN_0216d4a4(*(undefined4 *)(param_1 + 0xac),uVar6);
    thunk_FUN_0207400c(param_4,uVar2);
    break;
  case 9:
    FUN_02071558(uVar6);
    *param_3 = 6;
    uVar2 = FUN_02075878(*(undefined4 *)(param_1 + 0xb0),uVar6);
    thunk_FUN_0207400c(param_4,uVar2);
    break;
  case 10:
    FUN_02071634(uVar6);
    *param_3 = 7;
    uVar2 = FUN_0216d360(*(undefined4 *)(param_1 + 0xb4),uVar6);
    thunk_FUN_0207400c(param_4,uVar2);
    break;
  case 0xb:
    FUN_02071750(uVar6);
    *param_3 = 0xb;
    thunk_FUN_0207400c(param_4,&DAT_021713d4);
  }
  return;
}

