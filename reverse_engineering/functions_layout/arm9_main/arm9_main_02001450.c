
int FUN_02001450(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG strings=["hashtable.c"] */
  if (param_2 == 0) {
    FUN_02002068(&DAT_02092f84,s_hashtable_c_02092f88,0,0xd3);
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = FUN_02000fec(*(undefined4 *)(*param_1 + iVar2),param_2,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

