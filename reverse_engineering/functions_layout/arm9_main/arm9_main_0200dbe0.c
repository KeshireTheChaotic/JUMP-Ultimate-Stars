
byte FUN_0200dbe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iStack_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  int iStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  do {
    pbVar4 = *(byte **)(param_1 + 8);
    if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x80) == 0)) {
      switch(*pbVar4 & 0x1f) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        iVar3 = FUN_0200d940(pbVar4 + 1,auStack_14);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 3:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_1c);
        iVar3 = FUN_0200d940(uVar1,auStack_18);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 4:
        iVar3 = FUN_0200d940(pbVar4 + 1,auStack_20);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 5:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_2c);
        uVar1 = FUN_0200d9cc(uVar1,auStack_28);
        iVar3 = FUN_0200d9cc(uVar1,auStack_24);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 6:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_34);
        iVar3 = FUN_0200d940(uVar1,auStack_30);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 7:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_3c);
        iVar3 = FUN_0200d940(uVar1,auStack_38);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 8:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_48);
        uVar1 = FUN_0200d940(uVar1,auStack_44);
        iVar3 = FUN_0200d940(uVar1,auStack_40);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 9:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_58);
        uVar1 = FUN_0200d940(uVar1,auStack_54);
        uVar1 = FUN_0200d9cc(uVar1,auStack_50);
        iVar3 = FUN_0200d9cc(uVar1,auStack_4c);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 10:
        iVar3 = FUN_0200d940(pbVar4 + 1,auStack_5c);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 0xb:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_64);
        iVar3 = FUN_0200d940(uVar1,auStack_60);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 0xc:
        uVar1 = FUN_0200d9cc(pbVar4 + 5,auStack_6c);
        uVar1 = FUN_0200d940(uVar1,auStack_68);
        *(undefined4 *)(param_1 + 8) = uVar1;
        goto LAB_0200df18;
      case 0xd:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_70);
        *(undefined4 *)(param_1 + 8) = uVar1;
        goto LAB_0200df18;
      case 0xe:
        break;
      case 0xf:
        uVar1 = FUN_0200d9cc(pbVar4 + 1,&iStack_7c);
        uVar1 = FUN_0200d9cc(uVar1,auStack_78);
        iVar3 = FUN_0200d940(uVar1,auStack_74);
        *(int *)(param_1 + 8) = iVar3 + iStack_7c * 4;
        goto LAB_0200df18;
      case 0x10:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_8c);
        puVar2 = (undefined4 *)FUN_0200d940(uVar1,auStack_88);
        uStack_80 = *puVar2;
        iVar3 = FUN_0200d940(puVar2 + 1,auStack_84);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 0x11:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_9c);
        iVar3 = FUN_0200d940(uVar1,auStack_94);
        uVar1 = FUN_0200d940(iVar3 + 1,auStack_98);
        iVar3 = FUN_0200d940(uVar1,auStack_90);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 0x12:
        iVar3 = FUN_0200d940(pbVar4 + 1,auStack_a8);
        uVar1 = FUN_0200d940(iVar3 + 1,auStack_a4);
        iVar3 = FUN_0200d9cc(uVar1,auStack_a0);
        *(int *)(param_1 + 8) = iVar3 + 4;
        goto LAB_0200df18;
      case 0x13:
        uVar1 = FUN_0200d940(pbVar4 + 1,auStack_ac);
        *(undefined4 *)(param_1 + 8) = uVar1;
        goto LAB_0200df18;
      }
      return 0xff;
    }
    uVar1 = FUN_0200f480(param_1 + 0x18,param_1);
    FUN_0200dabc(uVar1,param_1);
    if (*(int *)(param_1 + 4) == 0) {
      return 0xff;
    }
    FUN_0200f4dc(param_1 + 0x18,param_1);
  } while (*(int *)(param_1 + 8) == 0);
LAB_0200df18:
  pbVar4 = *(byte **)(param_1 + 8);
  if ((*pbVar4 & 0x1f) != 1) {
    return *pbVar4 & 0x1f;
  }
  do {
    FUN_0200d940(pbVar4 + 1,&iStack_b0);
    pbVar4 = (byte *)(*(int *)(param_1 + 8) + iStack_b0);
    *(byte **)(param_1 + 8) = pbVar4;
  } while ((*pbVar4 & 0x1f) == 1);
  return *pbVar4 & 0x1f;
}

