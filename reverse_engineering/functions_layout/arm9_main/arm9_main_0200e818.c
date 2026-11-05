
int FUN_0200e818(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60 [21];
  
  local_94 = *param_2;
  local_90 = param_2[1];
  puVar6 = local_60;
  local_8c = param_2[2];
  puVar7 = param_1 + 7;
  local_88 = param_2[3];
  iVar5 = 5;
  local_84 = param_2[4];
  local_80 = param_2[5];
  local_7c = *param_1;
  local_78 = param_1[1];
  local_74 = param_1[2];
  local_70 = param_1[3];
  local_6c = param_1[4];
  local_68 = param_1[5];
  local_64 = param_1[6];
  do {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    puVar7 = puVar7 + 4;
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6 = puVar6 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *puVar6 = *puVar7;
  uVar1 = FUN_0200dbc4(&local_94);
  do {
    switch(uVar1) {
    case 0:
      break;
    case 1:
      return 0;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      FUN_0200d940(local_8c + 1,&local_98);
      iVar5 = local_64 + local_98;
      *param_1 = *(undefined4 *)(iVar5 + 4);
      param_1[1] = *(undefined4 *)(local_64 + local_98);
      param_1[2] = 0;
      param_1[3] = iVar5;
      return iVar5;
    case 0xe:
      return 0;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    default:
      return 0;
    }
    uVar1 = FUN_0200dbe0(&local_94);
  } while( true );
}

