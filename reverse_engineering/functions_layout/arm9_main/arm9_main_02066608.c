
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02066608(int *param_1,undefined4 param_2,int *param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_r6;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
                    /* JUS-TAG hw={"GX_3D":2} io=["04000440","0400045c"] */
  local_38 = *param_1 - *param_3;
  local_34 = param_1[1] - param_3[1];
  local_30 = param_1[2] - param_3[2];
  FUN_0205098c(&local_38,&local_38);
  FUN_02050acc(param_2,&local_38,&local_2c);
  FUN_0205098c(&local_2c,&local_2c);
  FUN_02050acc(&local_38,&local_2c,&local_20);
  if (param_4 != 0) {
    _DAT_04000440 = 2;
    unaff_r6 = (int *)&DAT_0400045c;
    _DAT_0400045c = local_30;
  }
  iVar1 = FUN_02050b68(param_1,&local_2c);
  iVar2 = FUN_02050b68(param_1,&local_20);
  iVar3 = FUN_02050b68(param_1,&local_38);
  if (param_4 != 0) {
    *unaff_r6 = -iVar1;
    *unaff_r6 = -iVar2;
    *unaff_r6 = -iVar3;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_2c;
    param_5[1] = local_20;
    param_5[2] = local_38;
    param_5[3] = local_28;
    param_5[4] = local_1c;
    param_5[5] = local_34;
    param_5[6] = local_24;
    param_5[7] = local_18;
    param_5[8] = local_30;
    param_5[9] = -iVar1;
    param_5[10] = -iVar2;
    param_5[0xb] = -iVar3;
  }
  return;
}

