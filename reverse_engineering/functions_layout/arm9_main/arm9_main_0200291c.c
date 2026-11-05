
char * FUN_0200291c(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int extraout_r1;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint local_38;
  int local_34;
  int local_2c;
  char local_8;
  
  local_34 = param_6;
  uVar1 = param_3 >> 0x18;
  uVar3 = param_4 >> 8 & 0xff;
  pcVar4 = (char *)(param_2 + -1);
  local_38 = param_3 >> 8 & 0xff;
  iVar7 = 0;
  bVar2 = false;
  *pcVar4 = '\0';
  if (((param_1 == 0) && (param_6 == 0)) && ((uVar1 == 0 || (uVar3 != 0x6f)))) {
    return pcVar4;
  }
  if (uVar3 < 0x6a) {
    if (uVar3 < 0x69) {
      if (uVar3 < 0x59) {
        if (uVar3 != 0x58) goto LAB_020029cc;
        goto LAB_020029c4;
      }
      if (uVar3 != 100) goto LAB_020029cc;
    }
    local_2c = 10;
    if (param_1 < 0) {
      if (param_1 != -0x80000000) {
        param_1 = -param_1;
      }
      bVar2 = true;
    }
  }
  else {
    if (uVar3 < 0x70) {
      if (uVar3 == 0x6f) {
        local_2c = 8;
        local_38 = 0;
      }
      goto LAB_020029cc;
    }
    if ((0x78 < uVar3) || (uVar3 < 0x75)) goto LAB_020029cc;
    if (uVar3 == 0x75) {
      local_2c = 10;
      local_38 = 0;
      goto LAB_020029cc;
    }
    if (uVar3 != 0x78) goto LAB_020029cc;
LAB_020029c4:
    local_2c = 0x10;
    local_38 = 0;
  }
LAB_020029cc:
  do {
    iVar8 = iVar7;
    pcVar5 = pcVar4;
    FUN_0200d338(param_1,local_2c);
    param_1 = FUN_0200d338(param_1,local_2c);
    cVar6 = (char)extraout_r1;
    if (extraout_r1 < 10) {
      cVar6 = cVar6 + '0';
    }
    else if (uVar3 == 0x78) {
      cVar6 = cVar6 + 'W';
    }
    else {
      cVar6 = cVar6 + '7';
    }
    pcVar4 = pcVar5 + -1;
    iVar7 = iVar8 + 1;
    *pcVar4 = cVar6;
  } while (param_1 != 0);
  if (((local_2c == 8) && (uVar1 != 0)) && (*pcVar4 != '0')) {
    pcVar4 = pcVar5 + -2;
    *pcVar4 = '0';
    iVar7 = iVar8 + 2;
  }
  local_8 = (char)param_3;
  if (local_8 == '\x02') {
    local_34 = param_5;
    if ((bVar2) || (local_38 != 0)) {
      local_34 = param_5 + -1;
    }
    if ((local_2c == 0x10) && (uVar1 != 0)) {
      local_34 = local_34 + -2;
    }
  }
  if (0x1fd < local_34 + (param_2 - (int)pcVar4)) {
    return (char *)0x0;
  }
  for (; iVar7 < local_34; iVar7 = iVar7 + 1) {
    pcVar4 = pcVar4 + -1;
    *pcVar4 = '0';
  }
  if ((local_2c == 0x10) && (uVar1 != 0)) {
    pcVar4[-1] = (char)(param_4 >> 8);
    pcVar4 = pcVar4 + -2;
    *pcVar4 = '0';
  }
  if (bVar2) {
    pcVar4 = pcVar4 + -1;
    *pcVar4 = '-';
  }
  else if (local_38 == 1) {
    pcVar4 = pcVar4 + -1;
    *pcVar4 = '+';
  }
  else if (local_38 == 2) {
    pcVar4 = pcVar4 + -1;
    *pcVar4 = ' ';
  }
  return pcVar4;
}

