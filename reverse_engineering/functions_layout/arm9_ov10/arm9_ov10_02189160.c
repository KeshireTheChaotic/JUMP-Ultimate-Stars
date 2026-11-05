
undefined4 FUN_02189160(undefined4 param_1,int param_2,int *param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    FUN_02002068(s_buffer____NULL_021a63ac,s_gpiUtility_c_021a63bc,0,0x199);
  }
  if (param_4 == (char *)0x0) {
    FUN_02002068(s_key____NULL_021a63cc,s_gpiUtility_c_021a63bc,0,0x19a);
  }
  if (param_5 == (char *)0x0) {
    FUN_02002068(s_value____NULL_021a63d8,s_gpiUtility_c_021a63bc,0,0x19b);
  }
  iVar2 = param_2 + *param_3;
  if (*(char *)(param_2 + *param_3) != '\\') {
    FUN_0218913c(param_1,1,s_Parse_Error__021a63e8);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar3 = 0;
  pcVar4 = (char *)(iVar2 + 2);
  cVar1 = *(char *)(iVar2 + 1);
  while( true ) {
    if (cVar1 == '\\') {
      iVar3 = 0;
      *param_4 = '\0';
      while( true ) {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if ((cVar1 == '\\') || (cVar1 == '\0')) break;
        if (iVar3 == 0x1ff) {
          FUN_0218913c(param_1,1,s_Parse_Error__021a63e8);
          FUN_02183f3c(param_1,3,1);
          return 3;
        }
        *param_5 = cVar1;
        param_5 = param_5 + 1;
        iVar3 = iVar3 + 1;
      }
      *param_5 = '\0';
      *param_3 = (int)(pcVar4 + *param_3 + (-1 - iVar2));
      return 0;
    }
    if (cVar1 == '\0') {
      FUN_0218913c(param_1,1,s_Parse_Error__021a63e8);
      FUN_02183f3c(param_1,3,1);
      return 3;
    }
    if (iVar3 == 0x1ff) break;
    *param_4 = cVar1;
    param_4 = param_4 + 1;
    iVar3 = iVar3 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  }
  FUN_0218913c(param_1,1,s_Parse_Error__021a63e8);
  FUN_02183f3c(param_1,3,1);
  return 3;
}

