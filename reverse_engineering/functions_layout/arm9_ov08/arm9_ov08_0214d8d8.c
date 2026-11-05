
int FUN_0214d8d8(int param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int local_1c;
  
  uVar4 = 0;
  if (param_3 < 1) {
    return -2;
  }
  while (*param_2 != (&DAT_0216af20)[param_1]) {
    iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 2));
    param_2 = param_2 + iVar1 + 4;
    param_3 = param_3 - (iVar1 + 4);
    if (param_3 < 1) {
      return -4;
    }
  }
  pcVar3 = param_2 + 4;
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 2));
  param_4 = param_4 + param_1 * 0x350;
  local_1c = -3;
  while( true ) {
    switch(*pcVar3) {
    default:
      iVar2 = local_1c;
      break;
    case '\x03':
      iVar2 = FUN_0214db10(pcVar3,param_4 + 8);
      uVar4 = uVar4 | 1;
      break;
    case '\x04':
      iVar2 = FUN_0214db10(pcVar3,param_4 + 0x138);
      uVar4 = uVar4 | 2;
      break;
    case '\x05':
      iVar2 = FUN_0214da40(pcVar3,param_4 + 0x268);
      uVar4 = uVar4 | 4;
      break;
    case '\x06':
      iVar2 = FUN_0214da40(pcVar3,param_4 + 0x2d8);
      uVar4 = uVar4 | 8;
      break;
    case '\n':
      iVar2 = FUN_0214d9fc(pcVar3,param_5 + (param_1 + 3) * 0x80);
    }
    if (iVar2 != 0) break;
    iVar2 = FUN_0214cdc4(*(undefined2 *)(pcVar3 + 2));
    pcVar3 = pcVar3 + iVar2 + 4;
    iVar1 = iVar1 - (iVar2 + 4);
    if (iVar1 < 1) {
      DAT_0216c1f8 = DAT_0216c1f8 | uVar4;
      return 0;
    }
  }
  return iVar2;
}

