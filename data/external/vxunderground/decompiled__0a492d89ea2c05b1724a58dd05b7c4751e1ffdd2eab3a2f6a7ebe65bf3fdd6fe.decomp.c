

/* WARNING: Removing unreachable block (ram,0x1002d027) */

longlong entry(uint param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  undefined4 unaff_retaddr;
  
  thunk_FUN_1002d030(UNRECOVERED_JUMPTABLE,unaff_retaddr,param_1);
  *(int *)(param_2 + 0xb8) = *(int *)(param_2 + 0xb8) + 0xa6;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x1002d101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*UNRECOVERED_JUMPTABLE)();
  return lVar1;
}




/* WARNING: Removing unreachable block (ram,0x1002d027) */

longlong FUN_1002d007(uint param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  undefined4 unaff_retaddr;
  
  thunk_FUN_1002d030(UNRECOVERED_JUMPTABLE,unaff_retaddr,param_1);
  *(int *)(param_2 + 0xb8) = *(int *)(param_2 + 0xb8) + 0xa6;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x1002d101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*UNRECOVERED_JUMPTABLE)();
  return lVar1;
}




/* WARNING: Removing unreachable block (ram,0x1002d088) */

longlong __cdecl thunk_FUN_1002d030(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 auStack_4 [4];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = auStack_4;
  uVar2 = uRam00000000;
  *unaff_FS_OFFSET = uVar1;
  return CONCAT44(uVar2,param_1);
}




/* WARNING: Removing unreachable block (ram,0x1002d088) */

longlong __cdecl FUN_1002d030(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 auStack_4 [4];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = auStack_4;
  uVar2 = uRam00000000;
  *unaff_FS_OFFSET = uVar1;
  return CONCAT44(uVar2,param_1);
}



