
int FUN_02188c88(undefined4 param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                char *param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
                undefined4 param_11)

{
  int iVar1;
  int local_1c [2];
  
  if ((((((param_2 == (char *)0x0) || (*param_2 == '\0')) &&
        ((param_4 == (char *)0x0 || (*param_4 == '\0')))) &&
       ((param_5 == (char *)0x0 || (*param_5 == '\0')))) &&
      ((param_6 == (char *)0x0 || (*param_6 == '\0')))) &&
     ((param_7 == 0 && ((param_3 == (char *)0x0 || (*param_3 == '\0')))))) {
    FUN_0218912c(param_1,s_No_search_criteria__021a624c);
    return 2;
  }
  iVar1 = FUN_02188e18(param_1,local_1c,1);
  if (iVar1 == 0) {
    if (param_2 == (char *)0x0) {
      *(undefined1 *)(local_1c[0] + 0x28) = 0;
    }
    else {
      FUN_02189478(local_1c[0] + 0x28,param_2,0x1f);
    }
    if (param_3 == (char *)0x0) {
      *(undefined1 *)(local_1c[0] + 0x47) = 0;
    }
    else {
      FUN_02189478(local_1c[0] + 0x47,param_3,0x15);
    }
    if (param_4 == (char *)0x0) {
      *(undefined1 *)(local_1c[0] + 0x5c) = 0;
    }
    else {
      FUN_02189478(local_1c[0] + 0x5c,param_4,0x33);
    }
    FUN_02001e6c(local_1c[0] + 0x5c);
    if (param_5 == (char *)0x0) {
      *(undefined1 *)(local_1c[0] + 0x8f) = 0;
    }
    else {
      FUN_02189478(local_1c[0] + 0x8f,param_5,0x1f);
    }
    if (param_6 == (char *)0x0) {
      *(undefined1 *)(local_1c[0] + 0xae) = 0;
    }
    else {
      FUN_02189478(local_1c[0] + 0xae,param_6,0x1f);
    }
    *(int *)(local_1c[0] + 0x130) = param_7;
    if (param_8 < 0) {
      param_8 = 0;
    }
    *(int *)(local_1c[0] + 0x134) = param_8;
    iVar1 = FUN_02188dc4(param_1,local_1c[0],param_9,param_10,param_11);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

