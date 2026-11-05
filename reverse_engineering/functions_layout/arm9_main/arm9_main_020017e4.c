
void FUN_020017e4(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = param_2;
  iVar2 = param_3;
  if (param_4 == 1) {
    pcVar4 = (char *)0x208d414;
  }
  else if (param_4 == 2) {
    pcVar4 = (char *)0x208d418;
  }
  else {
    pcVar4 = &DAT_0208d41c;
  }
  for (; 0 < iVar2; iVar2 = iVar2 + -3) {
    if (param_3 < 3) {
      iVar3 = param_3;
    }
    else {
      iVar3 = 3;
    }
    FUN_020018a4(param_1,pcVar5,iVar3);
    param_1 = param_1 + 3;
    pcVar5 = pcVar5 + 4;
  }
  FUN_0200d12c(param_3,3);
  if (extraout_r1 == 1) {
    pcVar6 = pcVar5 + -2;
  }
  else {
    pcVar6 = pcVar5;
    if (extraout_r1 == 2) {
      pcVar6 = pcVar5 + -1;
    }
  }
  *pcVar5 = '\0';
  while (param_2 < pcVar5) {
    pcVar5 = pcVar5 + -1;
    if (pcVar5 < pcVar6) {
      cVar1 = *pcVar5;
      if (cVar1 < '\x1a') {
        *pcVar5 = cVar1 + 'A';
      }
      else if (cVar1 < '4') {
        *pcVar5 = cVar1 + 'G';
      }
      else if (cVar1 < '>') {
        *pcVar5 = cVar1 + -4;
      }
      else if (cVar1 == '>') {
        *pcVar5 = *pcVar4;
      }
      else if (cVar1 == '?') {
        *pcVar5 = pcVar4[1];
      }
    }
    else {
      *pcVar5 = pcVar4[2];
    }
  }
  return;
}

