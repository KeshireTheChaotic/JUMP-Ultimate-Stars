
/* JUS-CLASS ALFont_021d4fb8::ALFont_021d4fb8 [class-source-file] stores vtable 021d4fb8 into *this
   (constructor) */

undefined4 *
ALFont_021d4fb8::ALFont_021d4fb8
          (undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_4;
  if ((param_5 == 0) &&
     (iVar1 = jus_AllocDebug(8,s_ALFont_cpp_021d5060,&DAT_021d4e5c,0x432), param_5 = 0, iVar1 != 0))
  {
    param_5 = jus_Class_021d4f18::jus_Class_021d4f18();
  }
  uVar2 = FUN_02035f84(param_2);
  ALFont_021d5010::ALFont_021d5010(param_1,param_5,uVar2,param_2);
  *param_1 = &vftable;
  (**(code **)(*param_2 + 8))();
  *(short *)(param_1 + 0xe) = (short)param_3;
  if (param_4 == 0) {
    *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(param_1 + 0xe);
  }
  else {
    *(short *)((int)param_1 + 0x3a) = (short)param_4;
  }
  ALFont::MakeFixBounds
            (param_1,*(undefined2 *)(param_1 + 0xe),*(undefined2 *)((int)param_1 + 0x3a),param_6,0,
             param_3,iVar3);
  param_1[0xf] = param_6;
  return param_1;
}

