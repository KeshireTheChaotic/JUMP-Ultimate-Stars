
undefined4 FUN_0200f2d0(char *param_1,char *param_2,int *param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  
  *param_3 = 0;
  if (param_2 == (char *)0x0) {
    return 1;
  }
  if (*param_2 == 'P') {
    pcVar5 = param_2 + 1;
    if (*pcVar5 == 'V') {
      pcVar5 = param_2 + 2;
    }
    if (*pcVar5 == 'K') {
      pcVar5 = pcVar5 + 1;
    }
    if ((*pcVar5 == 'v') && (*param_1 == 'P' || *param_1 == '*')) {
      return 1;
    }
  }
  if (*param_1 == '!' || *param_1 == '*') {
    pbVar3 = (byte *)(param_1 + 1);
    pbVar6 = (byte *)(param_2 + 1);
    if (*param_1 != *param_2) {
      return 0;
    }
    while( true ) {
      while( true ) {
        bVar1 = *pbVar3;
        if (bVar1 != *pbVar6) break;
        pbVar3 = pbVar3 + 1;
        pbVar6 = pbVar6 + 1;
        if (bVar1 == 0x21) {
          iVar7 = 0;
          bVar1 = *pbVar3;
          while (bVar1 != 0x21) {
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            iVar7 = iVar7 * 10 + (uint)bVar1 + -0x30;
            bVar1 = *pbVar3;
          }
          *param_3 = iVar7;
          return 1;
        }
      }
      do {
        bVar1 = *pbVar3;
        pbVar6 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0x21);
      do {
        pbVar3 = pbVar6 + 1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar3;
      } while (bVar1 != 0x21);
      if (*pbVar3 == 0) break;
      pbVar6 = (byte *)(param_2 + 1);
    }
    return 0;
  }
  while( true ) {
    cVar4 = *param_1;
    if ((cVar4 != 'P' && cVar4 != 'R') || (cVar4 != *param_2)) {
      if (cVar4 == *param_2) {
        do {
          if (cVar4 == '\0') {
            return 1;
          }
          param_1 = param_1 + 1;
          cVar4 = *param_1;
          param_2 = param_2 + 1;
        } while (cVar4 == *param_2);
      }
      return 0;
    }
    pcVar5 = param_1 + 1;
    pcVar2 = param_2 + 1;
    if ((param_2[1] == 'K') && (pcVar2 = param_2 + 2, *pcVar5 == 'K')) {
      pcVar5 = param_1 + 2;
    }
    param_2 = pcVar2;
    param_1 = pcVar5;
    if (*param_1 == 'K') break;
    if (*param_2 == 'V') {
      if (*param_1 == 'V') {
        param_1 = param_1 + 1;
      }
      param_2 = param_2 + 1;
    }
    if (*param_1 == 'V') {
      return 0;
    }
  }
  return 0;
}

