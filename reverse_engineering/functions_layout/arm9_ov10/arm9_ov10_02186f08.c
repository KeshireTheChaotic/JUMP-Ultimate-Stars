
/* WARNING: Switch with 1 destination removed at 0x02186fd4 */

int FUN_02186f08(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  iVar3 = *param_1;
  if ((param_2[0xc] != 0) &&
     ((iVar1 = FUN_02183728(param_1,param_2[2],param_2 + 10,&local_2c,1,&DAT_021a5e30),
      local_2c != 0 || (iVar1 != 0)))) {
    *param_2 = 0x6a;
    return 0;
  }
  if (param_2[0xc] == 0) {
    iVar1 = FUN_02187098(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*param_2 == 0x6a) {
      return 0;
    }
  }
  iVar1 = FUN_02183824(param_1,param_2[2],param_2 + 6,&local_30,&local_2c,&DAT_021a5e30);
  if (iVar1 != 0) {
    *param_2 = 0x6a;
    return 0;
  }
  if (0 < local_30) {
    iVar1 = FUN_0200199c(0);
    param_2[4] = iVar1 + 300;
  }
  do {
    iVar1 = FUN_02183670(param_1,param_2 + 6,&local_20,&local_1c,&local_18);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_20 != 0) {
      if (local_1c < 0x67) {
        if (local_1c < 0x66) {
          if (local_1c == 1) {
            local_28 = *(int *)(iVar3 + 0x1bc);
            local_24 = *(undefined4 *)(iVar3 + 0x1c0);
            if (local_28 != 0) {
              piVar2 = (int *)FUN_0217583c(0xc);
              if (piVar2 == (int *)0x0) {
                FUN_0218912c(param_1,s_Out_of_memory__021a5e34);
                return 1;
              }
              *piVar2 = param_2[3];
              iVar1 = FUN_02001e9c(local_20);
              piVar2[2] = iVar1;
              iVar1 = FUN_0200199c(0);
              piVar2[1] = iVar1;
              iVar1 = FUN_02183ec4(param_1,local_28,local_24,piVar2,0,2);
              if (iVar1 != 0) {
                return iVar1;
              }
            }
          }
        }
        else {
          FUN_02182c24(param_1,param_2[3],0x67,&DAT_021a5e44);
        }
      }
      else if (local_1c - 200U < 9) {
        FUN_02188fe8(param_1,param_2,local_1c,param_2[6],local_20,local_18);
      }
      FUN_02183634(param_1,param_2 + 6);
    }
    if (local_20 == 0) {
      if (local_2c != 0) {
        *param_2 = 0x6a;
      }
      return 0;
    }
  } while( true );
}

